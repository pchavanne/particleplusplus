#ifndef RAN_GENERATOR_H_INCLUDED
#define RAN_GENERATOR_H_INCLUDED

# include<random>
# include<chrono>
# include"setting.h"
class ran_gen{

public:
    unsigned seed;
    //std::discrete_distribution<int> disgen;

    ran_gen(){
        seed = std::chrono::system_clock::now().time_since_epoch().count();
        generator.seed(seed);
    }

    static ran_gen& getInstance(){
        static ran_gen A;
        return A;
    }

    std::default_random_engine& get_gen(){
        return generator;
    }

protected:
    std::default_random_engine generator;
};




#endif // RAN_GENERATOR_H_INCLUDED