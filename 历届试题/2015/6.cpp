#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
using namespace std;
int a[10][10];//�洢����
int is_row_col_repeat(int row,int col,int num){//�ж������Ƿ��ظ�
    //�ж����Ƿ��ظ�
    for (int i=1;i<=9;i++) {
        if (a[row][i]==num) {
            return 0;//���ظ�������0
        }
    }
    //�ж����Ƿ��ظ�
    for (int i=1;i<=9;i++) {
        if (a[i][col]==num) {
            return 0;//���ظ�������0
        }
    }
    return 1;//���в��ظ�������1
}
int check_row_range(int row){//�ж��еķ�Χ
    if (row>=1 && row<=3) {
        return 1;
    }else if(row>=4&&row<=6){
        return 4;
    }else {
        return 7;
    }
}
int check_col_range(int col){//�ж��еķ�Χ
    if(col>=1&&col<=3){
        return 1;
    }else if (col>=4&&col<=6) {
        return 4;
    }else {
        return 7;
    }
}
int is_block_repeat(int row,int col,int num){//�ж�ͬɫ�Ź����Ƿ��ظ�
    int x,y;
    x=check_row_range(row);
    y=check_col_range(col);
    for (int i=x;i<=x+2;i++) {
        for (int j=y;j<=y+2;j++) {
            if (a[i][j]==num) {
                return 0;//�ظ�������0
            }
        }
    }
    return 1;//���ظ�������1
}

void dfs(int row,int col){
    if (row>9) {//����г���9�У�ֱ�����
        for (int i=1;i<=9;i++) {
            for (int j=1;j<=9;j++) {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        exit(0);
    }

    if (a[row][col]==0) {//���û��������
        for (int i=1;i<=9;i++) {
            if (is_row_col_repeat(row, col, i) && is_block_repeat(row, col, i)) {//������оŹ����ظ�
                a[row][col]=i;//�������
                dfs(row+(col+1)/10, (col+1)%10);//��������
            	a[row][col]=0;//������Ϊ0
			}
        }
//        a[row][col]=0;//������Ϊ0
    }else{//����Ѿ����ˣ���������
        dfs(row+(col+1)/10, (col+1)%10);
    }
}
int main(int argc, char *argv[]) {
    string s;
    for(int i=1;i<=9;i++){
        cin >> s;//�����ַ���
        for(int j=1;j<=9;j++){
            char ss=s.at(j-1);//ȡs�ĵ�j-1���ַ�
            a[i][j]=ss-'0';//��ssת��Ϊ����
        }
    }
    dfs(1,1);
    return 0;
}
