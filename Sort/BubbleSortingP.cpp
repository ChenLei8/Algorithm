#include<stdio.h>
//升级版冒泡排序算法
void bubbleSort_1(int *arr, int n) {
    //设置数组左右边界
    int left = 0, right = n - 1;
    //当左右边界未重合时，进行排序
    while (left<right) {
        //从左到右遍历选出最大的数放到数组右边
        for (int i =left; i < right; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i]; arr[i] = arr[i + 1]; arr[i + 1] = temp;
            }
        }
        right--;
        //从右到左遍历选出最小的数放到数组左边
        for (int j = right;j> left; j--)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
            }
        }
        left++;
    }

}
int main() {
    int arr[] = { 10,6,5,2,3,8,7,4,9,1 };
    int n = sizeof(arr) / sizeof(int);
    bubbleSort_1(arr, n);
    printf("排序后的数组为：\n");
    for (int j = 0; j<n; j++)
        printf("%d ", arr[j]);
    printf("\n");
    return 0;
}