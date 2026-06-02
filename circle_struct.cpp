#include <iostream>

// 必須定義這個巨集，並放在 #include <cmath> 的「前面」
#define _USE_MATH_DEFINES 
#include <cmath>  

using namespace std;

struct circle {
    // 結構的資料成員 
	double radius;
	double diameter;
	double circuference;
	double area;
           

    // 建構子 (自動計算並初始化)
    circle(double _r){
    	radius = _r;
    	diameter = _r * 2;
    	circuference = 2 * M_PI * _r;
    	area = M_PI * _r * _r;
    }
	

    // 結構的函式成員 1：印出全部資料
    void print_circle(){
    	cout << "半徑: " << radius << "\n";
    	cout << "直徑: " << diameter << "\n";
    	cout << "圓周: " << circuference << "\n";
    	cout << "園面積: " << area << "\n";
    }
    

    // ★ 結構的函式成員 2：新增！只印出圓面積 ★
    void print_area(){
       	cout << "園面積:" << area << "\n";
       }
    
};

int main() {
    // === 1. 建立物件與自動計算 ===
    circle c1(5.0); 
    cout << "【1. 圓 c1 初始資料】\n";
    c1.print_circle();

    // === 2. 呼叫我們剛剛新增的專屬函式 ===
    cout << "\n【2. 呼叫專屬函式只看面積】\n";
    c1.print_area();  // 用點 (.) 來呼叫新函式

    // === 3. 實戰陷阱：直接修改內部成員 ===
    cout << "\n【3. 嘗試修改內部資料與陷阱示範】\n";
    cout << "原始 c1 的半徑為: " << c1.radius << "\n";

    c1.radius = 10.0; // 將半徑強制改成 10.0
    cout << "成功將 c1 的半徑修改為: " << c1.radius << "\n";
    
    cout << "此時再次呼叫 c1.print_area()，你會發現...\n";
    c1.print_area();  // 再次印出面積，還是舊的數值！
    cout << "（注意：面積並沒有跟著變大！因為直接修改 radius 並不會幫你重新計算面積。）\n";

    return 0;
}
