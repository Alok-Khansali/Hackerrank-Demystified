class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        vector<int> v;
        return(v);
    }
};
class TestDataUniqueValues {
public:
    static vector<int> get_array()
     {
        vector<int> v={1,2,3,4,5};
        return(v);
    }
    static int get_expected_result() {
        return(0);
    }
};
class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
         vector<int> v={56,4,90,4};
        return(v);
    }
    static int get_expected_result() {
        return(1);
    }
};
