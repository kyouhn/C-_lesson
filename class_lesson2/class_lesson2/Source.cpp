#include<cstdio>
#include<stdlib.h>
#include<time.h>

//����񂯂�̎��\���萔
#define ROCK 0
#define SCISSORS 1
#define PAPER 2

//�����\���萔
#define WIN 0
#define LOSE 1
#define DRAW 2

//�֐��̃v���g�^�C�v�錾
int getUserHand();
int getComputerHand();
int doJudge(int user, int computer);
void showJudge(int judge);

//�v���O�����̃��C���֐�
int main() {
	int user, computer, judge;

	//����������������
	srand(time(nullptr));

	//���[�U�����I������
	user = getUserHand();

	//�R���s���[�^�����I������
	computer = getComputerHand();

	//���s�𔻒肷��
	judge = doJudge(user, computer);

	//�����\������
	showJudge(judge);

	return 0;
}

//���[�U�̎��Ԃ��֐�
int getUserHand() {
	int hand;

	std::printf("0: �O�[�A1: �`���L�A2: �p�[\n");
	std::printf("���[�U�̎�=");
	std::scanf("%d", &hand);

	return hand;
}

//�R���s���[�^�̎��Ԃ��֐�
int getComputerHand() {
	int hand;

	hand = rand() % 3;
	std::printf("�R���s���[�^�̎�=%d\n",hand);

	return hand;
}

//���s�𔻒肷��֐�
int doJudge(int user, int computer) {
	int judge;

	if (user == computer) {
		judge = DRAW;
	}
	else if (user == ROCK&&computer == SCISSORS || user == SCISSORS&&computer == PAPER || user == PAPER && computer == ROCK) {
		judge = WIN;
	}
	else {
		judge = LOSE;
	}

	return judge;
}

//���s��\������֐�
void showJudge(int judge) {
	if (judge == WIN) {
		std::printf("���[�U�̏����ł�\n");
	}else if(judge == LOSE) {
		std::printf("���[�U�̕����ł�\n");
	}
	else if(judge == DRAW){
		std::printf("���������ł�\n");
	}
}