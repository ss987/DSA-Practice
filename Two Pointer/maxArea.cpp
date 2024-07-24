int maxArea(vector<int>& height) {
        int area=0;
        int i=0,j=height.size()-1;
        while(i<j){
            int h=min(height[i],height[j]);
            int l=j-i;
            area=max(area,h*l);
            if(height[i] < height[j])
            i++;
            else
            j--;
        }
        return area;
    }
