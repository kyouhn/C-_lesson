#include<iostream>
#include<cstring>

/*
//�\���̂̒�`
struct Employee
{
	int number;		//�Ј��ԍ�
	char name[80];	//����
	int salary;		//���^
};

//�\���̂̒�`
struct Company {
	struct Employee tanaka;		//�c������
	struct Employee sato;		//��������
	struct Employee suzuki;		//��؂���
	char companyName[80];		//��Ɩ�
};

int main() {
	//�\���̂��f�[�^�^�Ƃ����ϐ���錾����
	struct Company kyon;

	//�\���̂̃����o�ɑ�����s��
	kyon.tanaka.number = 1234;
	strcpy(kyon.tanaka.name, "�c����Y");
	kyon.tanaka.salary = 200000;

	//�\���̂̃����o��\������
	std::cout << kyon.tanaka.number << std::endl;
	std::cout << kyon.tanaka.name << std::endl;
	std::cout << kyon.tanaka.salary << std::endl;

	return 0;
}*/

struct Employee {
	int32_t number;		//�Ј��ԍ�
	char name[80];	//����
	int32_t salary;		//���^
};

//�v���O�����̃��C���֐�
//int main(){
	/*
	//�\���̂��f�[�^�^�Ƃ����z���錾����
	struct Employee person[10];

	//�z��̗v�f�̃����o�ɑ�����s��
	person[0].number = 1234;
	strcpy(person[0].name, "�c����Y");
	person[0].salary = 200000;

	person[1].number = 1235;
	strcpy(person[1].name, "�������Y");
	person[1].salary = 250000;

	person[2].number = 1236;
	strcpy(person[2].name, "��؎O�Y");
	person[2].salary = 300000;

	//�\���̂̃����o��\������
	for (int i = 0; i < 3; i++) {
		std::cout << person[i].number << std::endl;
		std::cout << person[i].name << std::endl;
		std::cout << person[i].salary << std::endl;
	}
	*/
	/*
	struct Employee tanaka;

	//�\���̂̃����o�ɑ�����s��
	tanaka.number = 1234;
	strcpy(tanaka.name, "�c����Y");
	tanaka.salary = 200000;

	//�\���̂̃|�C���^��錾����
	struct Employee *p;

	//�\���̂̃|�C���^�ɍ\���̂̎��Ԃ̃A�h���X��������
	p = &tanaka;

	//�\���̂̃����o���g���ă����o��\������

	std::cout << p->number << std::endl;
	std::cout << p->name << std::endl;
	std::cout << p->salary << std::endl;
	*/

/*
	//�֐��̃v���g�^�C�v�錾
	void showEmployee(struct Employee *p);
*/

//�֐��̃v���g�^�C�v
struct Employee *getEmployee();

	//�v���O�����̃��C���֐�
int main() {
	//�\���̂̎��Ԃ�錾����
	struct Employee *p;

	//�\���̂̃|�C���^���擾����
	p = getEmployee();

	//�\���̂̃|�C���^���g���ă����o��\������
	std::cout << p->number << std::endl;
	std::cout << p->name << std::endl;
	std::cout << p->salary << std::endl;

	return 0;
}

//�\���̂̃|�C���^��߂�l�Ƃ���֐�
struct Employee *getEmployee() {
	//�\���̂̎��Ԃ�錾����
	static struct Employee tanaka;

	//�\���̂̃����o�ɑ�����s��
	tanaka.number = 1234;
	strcpy(tanaka.name, "�c����Y");
	tanaka.salary = 200000;

	//�\���̂̃|�C���^��Ԃ�
	return &tanaka;
}

/*
		//�\���̂̃����o�ɑ�����s��
		tanaka.number = 1234;
		strcpy(tanaka.name, "�c����Y");
		tanaka.salary = 200000;

		//�\���̂̃|�C���^���֐��̈����ɓn��
		showEmployee(&tanaka);

		return 0;
}

	void showEmployee(struct Employee *p)
	{
		//�\���̂̃|�C���^���g���ă����o��\������
		std::cout << p->number << std::endl;
		std::cout << p->name << std::endl;
		std::cout << p->salary << std::endl;
	}
	*/