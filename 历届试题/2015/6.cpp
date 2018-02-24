#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
using namespace std;
int a[10][10];//存储数字
int is_row_col_repeat(int row,int col,int num){//判断行列是否重复
    //判断行是否重复
    for (int i=1;i<=9;i++) {
        if (a[row][i]==num) {
            return 0;//行重复，返回0
        }
    }
    //判断列是否重复
    for (int i=1;i<=9;i++) {
        if (a[i][col]==num) {
            return 0;//列重复，返回0
        }
    }
    return 1;//行列不重复，返回1
}
int check_row_range(int row){//判断行的范围
    if (row>=1 && row<=3) {
        return 1;
    }else if(row>=4&&row<=6){
        return 4;
    }else {
        return 7;
    }
}
int check_col_range(int col){//判断列的范围
    if(col>=1&&col<=3){
        return 1;
    }else if (col>=4&&col<=6) {
        return 4;
    }else {
        return 7;
    }
}
int is_block_repeat(int row,int col,int num){//判断同色九宫格是否重复
    int x,y;
    x=check_row_range(row);
    y=check_col_range(col);
    for (int i=x;i<=x+2;i++) {
        for (int j=y;j<=y+2;j++) {
            if (a[i][j]==num) {
                return 0;//重复，返回0
            }
        }
    }
    return 1;//不重复，返回1
}

void dfs(int row,int col){
    if (row>9) {//如果行超出9行，直接输出
        for (int i=1;i<=9;i++) {
            for (int j=1;j<=9;j++) {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        exit(0);
    }

    if (a[row][col]==0) {//如果没有填数字
        for (int i=1;i<=9;i++) {
            if (is_row_col_repeat(row, col, i) && is_block_repeat(row, col, i)) {//如果行列九宫格不重复
                a[row][col]=i;//填充数字
                dfs(row+(col+1)/10, (col+1)%10);//继续搜索
            	a[row][col]=0;//重新置为0
			}
        }
//        a[row][col]=0;//重新置为0
    }else{//如果已经填了，继续搜索
        dfs(row+(col+1)/10, (col+1)%10);
    }
}
int main(int argc, char *argv[]) {
    string s;
    for(int i=1;i<=9;i++){
        cin >> s;//输入字符串
        for(int j=1;j<=9;j++){
            char ss=s.at(j-1);//取s的第j-1的字符
            a[i][j]=ss-'0';//将ss转化为整数
        }
    }
    dfs(1,1);
    return 0;
}
