class Solution {
public:
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        int a=image[sr][sc];
        if(a==color)
        {
            return image;
        }
        check(image,sr,sc,color,a);
        return image;
    }
    void check(vector<vector<int>>& image, int sr, int sc, int color,int a) 
    {
        if(sr<image.size() && sc<image[sr].size() && image[sr][sc]==a)
        {
            image[sr][sc]=color;
        }
        if(sr-1<image.size() && sc<image[sr-1].size() && image[sr-1][sc] == a)
        {
            // image[sr-1][sc]=color;
            check(image,sr-1,sc,color,a);
        }
        if(sr<image.size() && sc+1<image[sr].size() && image[sr][sc+1]==a)
        {
            // image[sr][sc+1]=color;
            check(image,sr,sc+1,color,a);
        }
        if(sr<image.size() && sc-1<image[sr].size() && image[sr][sc-1]==a)
        {
            // image[sr][sc-1]=color;
            check(image,sr,sc-1,color,a);
        }
        if(sr+1<image.size() && sc<image[sr+1].size() && image[sr+1][sc]==a)
        {
            // image[sr+1][sc]=color;
            check(image,sr+1,sc,color,a);
        }
    }
};