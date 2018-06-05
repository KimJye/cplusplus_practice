#include <iostream>

using namespace std;

class AccountExcetion
{
public:
	virtual void ShowExceptionReason() = 0;
};

class WrongAccountException :public AccountExcetion
{
private:
	int amount;
public:
	WrongAccountException(int money) :amount(money) {}
	void ShowExceptionReason() {
		cout << "���� �޽���: " << amount << "�� �ԱݺҰ�" << endl;
	}
};

class NegativeBalanceException :public AccountExcetion
{
private:
	int balance;//�ܰ�
public:
	NegativeBalanceException(int money) : balance(money) {}
	void ShowExceptionReason() {
		cout << "���� �޽���: �ܾ� " << balance << ", �ܾ׺���" << endl;
	}
};

class ExceedLimitException : public AccountExcetion
{
private:
	int limit;//�ѵ�
public:
	ExceedLimitException(int money) : limit(money) {}
	void ShowExceptionReason() {
		cout << "���� �޽���: �ѵ� " << limit << ", �ѵ� ���� �� ���� ����Դϴ�" << endl;
	}
};

class BankAccount 
{
	int balance;//�ܾ�
	int limit;//��ȸ ��� �ѵ�

public:
	BankAccount(int limit) {
		this->limit = limit;
		balance = 0;
	}
	void deposit(int amount) {//�Ա�
		
			if (amount < 0) {
				WrongAccountException expn(amount);
				throw expn;
			}
			balance += amount;
		
	}
	void withdraw(int amount)
	{//���
		
			if (amount < 0) {
				throw WrongAccountException(amount);
				
			}
			if (amount > limit) {
				ExceedLimitException expn(limit);
				throw expn;
			}
			if (amount > balance) {
				NegativeBalanceException expn(balance);
				throw expn;
			}

			balance -= amount;
		}
		
	int getBalance() {//�ܰ� ��ȯ
		return balance;
	}
};

int main(void)
{
	cout << "hw15_3:������" << endl;

	BankAccount b(100);

	int menu= 0;//�޴� ��ȣ �Է�
	int item = 0;//�� �Է�
	
	int result1=0;//�Ա� �Ѿ�
	int result2=0;//��� �Ѿ�

	cout << "�޴� ��ȣ�� �Է��ϼ���: ";
	
	do {
		cout << "1:�Ա� 2:���: 3:�ܾ���ȸ 4:���� --->" << endl;
		cin >> menu;
	
		switch (menu) {
			
		case 1:
			cout << "�Ա��մϴ�." << endl;
			cout << "�Ա� ��: ";
			cin >> item;
			try {
				b.deposit(item);
				result1+= item;
			}
			catch (AccountExcetion &expn) {
				expn.ShowExceptionReason();
			}
			break;
			
		case 2:
			cout << "����մϴ�." << endl;
			cout << "��� ��: ";
			cin >> item;
			try {
				b.withdraw(item);
				result2 += item;
			}
			catch (AccountExcetion &expn) {
				expn.ShowExceptionReason();
			}
			break;
		
		case 3:
			cout << "�ܾ���ȸ�մϴ�." << endl;
			cout << "�ܾ�: " << b.getBalance() << endl;
			break;

		case 4:
			cout << "�����մϴ�." << endl;
			cout << "�Ա� �Ѿ�: " << result1 << ", ��� �Ѿ�: " << result2 << endl;
			break;

		default:
			cout << "�޴� ��ȣ ����: �޴��� �ٽ� �����ϼ���." << endl;
		}
	} while (menu != 4);
	return 0;
}