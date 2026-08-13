class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        

        int n = position.size();

        std::vector<std::pair<int,int>> cars(n);

        for(int i = 0;  i < n ;  i++)
        {
            cars[i] = {position[i], speed[i]};
        }
        std::sort(cars.rbegin(),cars.rend());

        std::stack<double> fleetstack;

        for(int i = 0 ; i< n ; i++)
        {
            double time = (double)(target - cars[i].first) / cars[i].second;

        if(fleetstack.empty() ||  time > fleetstack.top())
        {
            fleetstack.push(time);
        }
        }

    return fleetstack.size() ;

    }
};
