class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        fillColor(image, sr, sc, color, image[sr][sc]);
        return image;
    }
   
    void fillColor(vector<vector<int>>& image, int sr, int sc, int color, int preColor){
        if(sr < 0 || sc < 0 || sr > image.size() - 1 || sc > image[0].size() - 1) 
            return;
        if (image[sr][sc] != preColor || image[sr][sc] == color) 
            return;
        image[sr][sc] = color;
        
        fillColor(image, m, n, sr + 1, sc, color, preColor);
        fillColor(image, m, n, sr, sc + 1, color, preColor);
        fillColor(image, m, n, sr - 1, sc, color, preColor);
        fillColor(image, m, n, sr, sc - 1, color, preColor);        
    }
};
