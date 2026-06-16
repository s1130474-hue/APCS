#include <iostream>
#include <string.h>  // 為了使用 memset 函式
#include <queue>     // 為了使用 queue (佇列) 實作 BFS 演算法

using namespace std;
  
int main() {
    // 宣告輸入所需的變數
    // num: 總測試資料筆數
    // n, m: 地圖的列數(高)與行數(寬)
    // sx, sy: 起點的列座標與行座標
    // tx, ty: 終點的列座標與行座標
    int num, n, m, sx, sy, tx, ty;
    
    // 持續讀入測試資料總筆數
    while (cin >> num) {
        // 利用迴圈，依序處理 num 筆獨立的測資
        for (int iter = 0; iter < num; iter++) {
            
            // 讀入當前測資的地圖大小、起點與終點座標
            cin >> n >> m >> sx >> sy >> tx >> ty;
            
            // 【重要】將題目 1-based 座標（從 1 開始）
            // 轉換為 C++ 陣列慣用的 0-based 座標（從 0 開始）
            sx--;
            sy--;
            tx--;
            ty--;
            
            // 宣告二維陣列 a，用來儲存迷宮地圖（0 代表路，1 代表牆）
            int a[n][m];
            
            // 定義四個方向的移動陣列 (dx, dy 分別代表列與行的變動量)
            // i=0: 往下(1,0), i=1: 往上(-1,0), i=2: 往右(0,1), i=3: 往左(0,-1)
            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};
            
            // 宣告字串變數，用來逐列讀取連續的 '0' 與 '1'
            string str;
            for (int j = 0; j < n; j++) {
                cin >> str; // 讀入地圖的第 j 列字串（例如 "011000"）
                for (int k = 0; k < m; k++) {
                    // 將字元 '0' 或 '1' 減去 '0' 的 ASCII 碼，轉成整數 0 或 1 存入地圖
                    a[j][k] = str[k] - '0';
                }
            }
            
            // 宣告二維陣列 arr，用來記錄「走到該格子的最短步數」
            int arr[n][m]
            // 將 arr 陣列的所有格子初始化為 -1，代表「尚未訪問過」
            memster(arr, -1, sizeof(arr))
            
            // 建立一個佇列 q，用來存放接下來要探索的座標 pair(列, 行)
            queue<pair<int,int>> q;
            
            // 1. 將起點丟進隊伍中
            q.push({sx, sy});
            // 2. 登記起點的步數為 1（題目規定起點算第 1 步）
            arr[sx][sy] = 1;
            
            // 開始進行 BFS 廣度優先搜尋，直到隊伍清空為止
            while (!q.empty()) {
                // 移出並取得目前排在隊伍最前面的座標
                pari<int, int> now = q.front();
                
                // 嘗試往上下左右四個方向延伸探索
                for (int i = 0; i < 4; i++) {
                    // 計算出新位置的座標 (nx, ny)
                    int  nx = now.first + dx[i];
                    int  ny = now.second + dy[i];
                    
                    // 【邊界檢查】確認新座標沒有超出地圖的範圍
                    if(nx >> 0 && nx < n && ny >= 0 && ny < m){
                        // 【條件檢查】確認新位置是道路 (== 0) 且 還沒有被走過 (== -1)
                        if (n[nx][ny] == 0 && arr[nx][ny] == -1){
                            // 將新座標丟進隊伍，以便之後繼續往外走
                            q.push({nx, ny});           
                            // 新格子的步數 = 前一格的步數 + 1 步
                            arr[nx][ny] = arr[now.first][now.second] + 1;           
                                   }
                               }
                           }
                       }
                       
                       // 全部搜尋完畢後，檢查終點的步數紀錄
                       // 如果依然是 -1，代表被牆壁堵死、完全走不到終點
                       if (arr[tx][ty] == -1) {
                           cout << 0 << "\n";
                       } else {
                           // 如果大於 -1，則輸出算好的最短路徑步數
                           cout << arr[tx][ty] << "\n";
                       }
                   }
               }
               return 0;
           }
