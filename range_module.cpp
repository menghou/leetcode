//
// Created by houmeng on 17-10-24.
//
/**
 * Your RangeModule object will be instantiated and called as such:
 * RangeModule obj = new RangeModule();
 * obj.addRange(left,right);
 * bool param_2 = obj.queryRange(left,right);
 * obj.removeRange(left,right);
 */
#include <vector>
//TODO range_module
using std::vector

class RangeModule {
public:
    RangeModule() {
    }

    void addRange(int left, int right) {

    }

    bool queryRange(int left, int right) {

    }

    void removeRange(int left, int right) {

    }
private:
    vector<std::pair<int, int>> splitedPoints;
};


RangeModule::RangeModule() {
    splitedPoints = new vector<int>;
}
