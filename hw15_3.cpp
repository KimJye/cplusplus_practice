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
		cout << "예외 메시지: " << amount << "는 입금불가" << endl;
	}
};

class NegativeBalanceException :public AccountExcetion
{
private:
	int balance;//잔고
public:
	NegativeBalanceException(int money) : balance(money) {}
	void ShowExceptionReason() {
		cout << "예외 메시지: 잔액 " << balance << ", 잔액부족" << endl;
	}
};

class ExceedLimitException : public AccountExcetion
{
private:
	int limit;//한도
public:
	ExceedLimitException(int money) : limit(money) {}
	void ShowExceptionReason() {
		cout << "예외 메시지: 한도 " << limit << ", 한도 보다 더 많은 출금입니다" << endl;
	}
};

class BankAccount 
{
	int balance;//잔액
	int limit;//일회 출금 한도

public:
	BankAccount(int limit) {
		this->limit = limit;
		balance = 0;
	}
	void deposit(int amount) {//입금
		
			if (amount < 0) {
				WrongAccountException expn(amount);
				throw expn;
			}
			balance += amount;
		
	}
	void withdraw(int amount)
	{//출금
		
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
		
	int getBalance() {//잔고 반환
		return balance;
	}
};

int main(void)
{
	cout << "hw15_3:김지혜" << endl;

	BankAccount b(100);

	int menu= 0;//메뉴 번호 입력
	int item = 0;//값 입력
	
	int result1=0;//입금 총액
	int result2=0;//출금 총액

	cout << "메뉴 번호를 입력하세요: ";
	
	do {
		cout << "1:입금 2:출금: 3:잔액조회 4:종료 --->" << endl;
		cin >> menu;
	
		switch (menu) {
			
		case 1:
			cout << "입금합니다." << endl;
			cout << "입금 값: ";
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
			cout << "출금합니다." << endl;
			cout << "출금 값: ";
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
			cout << "잔액조회합니다." << endl;
			cout << "잔액: " << b.getBalance() << endl;
			break;

		case 4:
			cout << "종료합니다." << endl;
			cout << "입금 총액: " << result1 << ", 출금 총액: " << result2 << endl;
			break;

		default:
			cout << "메뉴 번호 오류: 메뉴를 다시 선택하세요." << endl;
		}
	} while (menu != 4);
	return 0;
}