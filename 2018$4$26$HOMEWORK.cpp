#include <iostream>
using namespace std;
int main() {
    int products;
        cout << "請輸入買了幾樣商品\n";
        cin >> products;
    int price[products] = {0};
    for (int i = 0; i < products; i++){
        cout <<"請輸入第" << i + 1 << "個商品金額\n";
        cin >> price[i];
        price[i] %= 100;    
    }
    int allCost = 0;
    for (int i = 0; i < products; i++){
        allCost += price[i];
    }
    int biggestPrice = 0;
    for (int i = 0; i < products;i++){
        if (price[i] > allCost/2){
            biggestPrice = price[i];
        }else{
            int i = 0;
            for (int j = 0; j < products; j++){
                if (price[j] > i){
                    i = price[j];
                }
            }
            biggestPrice = i;
        }
    }
    cout << "第一位找零" << 100 - biggestPrice%100 << "元\n";
    cout << "第二位找零" << 100 - (allCost - biggestPrice)%100 << "元\n";
}
