class Solution
{
    public:
        int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
        {
            int area1, area2;

           	//Area of the two seperate rectangles
            area1 = (ax2 - ax1) *(ay2 - ay1);
            area2 = (bx2 - bx1) *(by2 - by1);

           	//Getting the coordinates of common area (if any)
            int x1 = max(ax1, bx1);
            int y1 = max(ay1, by1);
            int x2 = min(ax2, bx2);
            int y2 = min(ay2, by2);

           	//Calculatin the common area (if any)
            int h = y2 - y1;
            int l = x2 - x1;
            int common_area = 0;
            if (h > 0 && l > 0)
            {
                common_area = h * l;
            }

            return area1 + area2 - common_area;
        }
};