class DataStream {
public:
    int val=0;
    int kx=0;
    int val_count=0;
    DataStream(int value, int k) {
        val=value;
        kx=k;
    }
    
    bool consec(int num) {
        if(num==val)
            val_count++;
        else
            val_count=0;
        return val_count>=kx;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */