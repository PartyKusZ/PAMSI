

#include "tests.hpp"

void test_qsort_10000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/qsort10'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_10000; i+=100){
        auto start = std::chrono::high_resolution_clock::now();
        quick_sort(tab,0,i);
        std :: cout << i << "test_qsort_10000 " << "Done" << "\n";
        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);


    }
}

void test_qsort_100000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/qsort100'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_100000; i+=1000){
        auto start = std::chrono::high_resolution_clock::now();
        quick_sort(tab,0,i);
        std :: cout << i << "test_qsort_100000 " << "Done" << "\n";

        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);


    }
}

void test_qsort_500000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/qsort500'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_500000; i+=5000){
        auto start = std::chrono::high_resolution_clock::now();
        quick_sort(tab,0,i);
        std :: cout << i << "test_qsort_500000 " << "Done" << "\n";

        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);


    }
}

void test_qsort_962903(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/qsort692'903.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_MAXIMUM - 3; i+=9629){
        auto start = std::chrono::high_resolution_clock::now();
        quick_sort(tab,0,i);
        std :: cout << i << "test_qsort_max " << "Done" << "\n";

        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);


    }
}


void test_merge_sort_10000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/merge10'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_10000 ; i+=100){
        auto start = std::chrono::high_resolution_clock::now();
        merge_sort(tab,0,i);
        std :: cout << i << "test_merge_10000 " << "Done" << "\n";

        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);


    }
}


void test_merge_sort_100000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/merge100'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_100000; i+=1000){
        auto start = std::chrono::high_resolution_clock::now();
        merge_sort(tab,0,i);
        std :: cout << i << "test_merge_100000 " << "Done" << "\n";

        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);


    }
}



void test_merge_sort_500000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/merge500'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_500000; i+=5000){
        auto start = std::chrono::high_resolution_clock::now();
        merge_sort(tab,0,i);
        std :: cout << i << "test_merge_500000 " << "Done" << "\n";

        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);


    }
}


void test_merge_sort_962903(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/merge962'903.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_MAXIMUM - 3; i+=9629){
        auto start = std::chrono::high_resolution_clock::now();
        merge_sort(tab,0,i);
        std :: cout << i << "test_merge_max " << "Done" << "\n";

        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);


    }
}


void test_bucket_sort_10000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/bucket10'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    double *max = std :: max_element(tab, tab + SIZE_10000);
    
    for(int i = 100; i <= SIZE_10000; i+=100){
        auto start = std::chrono::high_resolution_clock::now();
        bucket_sort(tab,sizeof(tab[0]) * i);

        std :: cout << i << "test_bucket_10000 " << "Done" << "\n";

         auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);
    }
}
void test_bucket_sort_100000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/bucket100'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    double *max = std :: max_element(tab, tab + SIZE_100000);
    for(int i = 100; i <= SIZE_100000; i+=1000){
        auto start = std::chrono::high_resolution_clock::now();
        bucket_sort(tab,sizeof(tab[0]) * i);
    
        std :: cout << i << "test_bucket_100000 " << "Done" << "\n";

         auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);
    }
}
void test_bucket_sort_500000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/bucket500'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    double *max = std :: max_element(tab, tab + SIZE_500000);
    for(int i = 100; i <= SIZE_500000; i+=5000){
        auto start = std::chrono::high_resolution_clock::now();
                bucket_sort(tab,sizeof(tab[0]) * i);

        std :: cout << i << "test_bucket_500000 " << "Done" << "\n";

         auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);
    }
}

void test_bucket_sort_962903(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/bucket962'903.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    double *max = std :: max_element(tab, tab + SIZE_MAXIMUM - 3);
    for(int i = 100; i <= SIZE_MAXIMUM - 3; i+=9629){
        auto start = std::chrono::high_resolution_clock::now();
        bucket_sort(tab,sizeof(tab[0]) * i);

        std :: cout << i << "test_bucket_max  " << "Done" << "\n";

         auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);
    }
}


void test_intro_sort_10000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/intro10'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_10000; i+=100){
        auto start = std::chrono::high_resolution_clock::now();
        intro_sort(tab,i);
        std :: cout << i << "test_intro_10000 " << "Done" << "\n";

         auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);
    }    
}
void test_intro_sort_100000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/intro100'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_100000; i+=1000){
        auto start = std::chrono::high_resolution_clock::now();
        intro_sort(tab,i);
        std :: cout << i << "test_intro_100000 " << "Done" << "\n";

         auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);
    }    
}

void test_intro_sort_500000(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/intro500'000.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_500000; i+=5000){
        auto start = std::chrono::high_resolution_clock::now();
        intro_sort(tab,i);
        std :: cout << i << "test_intro_500000 " << "Done" << "\n";

         auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);
    }    
}

void test_intro_sort_962903(double *tab){
    std :: fstream file;
    file.open("../sprawko/dane/intro962'903.txt", std :: ios :: out);
    std::random_device rd;
    std::mt19937 g(rd());
    for(int i = 100; i <= SIZE_MAXIMUM - 3; i+=9629){
        auto start = std::chrono::high_resolution_clock::now();
        intro_sort(tab,i);
        std :: cout << i << "test_intro_max " << "Done" << "\n";

         auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        file << i << " " << time.count() << '\n';
        std :: shuffle(tab, tab+i, g);
    }    
}

