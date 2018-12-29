#include<iostream>
#include<cstring>

/*
//構造体の定義
struct Employee
{
	int number;		//社員番号
	char name[80];	//氏名
	int salary;		//給与
};

//構造体の定義
struct Company {
	struct Employee tanaka;		//田中さん
	struct Employee sato;		//佐藤さん
	struct Employee suzuki;		//鈴木さん
	char companyName[80];		//企業名
};

int main() {
	//構造体をデータ型とした変数を宣言する
	struct Company kyon;

	//構造体のメンバに代入を行う
	kyon.tanaka.number = 1234;
	strcpy(kyon.tanaka.name, "田中一郎");
	kyon.tanaka.salary = 200000;

	//構造体のメンバを表示する
	std::cout << kyon.tanaka.number << std::endl;
	std::cout << kyon.tanaka.name << std::endl;
	std::cout << kyon.tanaka.salary << std::endl;

	return 0;
}*/

struct Employee {
	int32_t number;		//社員番号
	char name[80];	//氏名
	int32_t salary;		//給与
};

//プログラムのメイン関数
//int main(){
	/*
	//構造体をデータ型とした配列を宣言する
	struct Employee person[10];

	//配列の要素のメンバに代入を行う
	person[0].number = 1234;
	strcpy(person[0].name, "田中一郎");
	person[0].salary = 200000;

	person[1].number = 1235;
	strcpy(person[1].name, "佐藤次郎");
	person[1].salary = 250000;

	person[2].number = 1236;
	strcpy(person[2].name, "鈴木三郎");
	person[2].salary = 300000;

	//構造体のメンバを表示する
	for (int i = 0; i < 3; i++) {
		std::cout << person[i].number << std::endl;
		std::cout << person[i].name << std::endl;
		std::cout << person[i].salary << std::endl;
	}
	*/
	/*
	struct Employee tanaka;

	//構造体のメンバに代入を行う
	tanaka.number = 1234;
	strcpy(tanaka.name, "田中一郎");
	tanaka.salary = 200000;

	//構造体のポインタを宣言する
	struct Employee *p;

	//構造体のポインタに構造体の実態のアドレスを代入する
	p = &tanaka;

	//構造体のメンバを使ってメンバを表示する

	std::cout << p->number << std::endl;
	std::cout << p->name << std::endl;
	std::cout << p->salary << std::endl;
	*/

/*
	//関数のプロトタイプ宣言
	void showEmployee(struct Employee *p);
*/

//関数のプロトタイプ
struct Employee *getEmployee();

	//プログラムのメイン関数
int main() {
	//構造体の実態を宣言する
	struct Employee *p;

	//構造体のポインタを取得する
	p = getEmployee();

	//構造体のポインタを使ってメンバを表示する
	std::cout << p->number << std::endl;
	std::cout << p->name << std::endl;
	std::cout << p->salary << std::endl;

	return 0;
}

//構造体のポインタを戻り値とする関数
struct Employee *getEmployee() {
	//構造体の実態を宣言する
	static struct Employee tanaka;

	//構造体のメンバに代入を行う
	tanaka.number = 1234;
	strcpy(tanaka.name, "田中一郎");
	tanaka.salary = 200000;

	//構造体のポインタを返す
	return &tanaka;
}

/*
		//構造体のメンバに代入を行う
		tanaka.number = 1234;
		strcpy(tanaka.name, "田中一郎");
		tanaka.salary = 200000;

		//構造体のポインタを関数の引数に渡す
		showEmployee(&tanaka);

		return 0;
}

	void showEmployee(struct Employee *p)
	{
		//構造体のポインタを使ってメンバを表示する
		std::cout << p->number << std::endl;
		std::cout << p->name << std::endl;
		std::cout << p->salary << std::endl;
	}
	*/