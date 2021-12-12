vector: Vectors are dynamic size array

## Declaring vector:
    vector<data_type> variable_name;
        vector<int> v

## Taking input in vector  {push_back();}:
    we can take input in vector same as we take in arrays using for loop
    we only have to use ""push_back()""; [inbuilt function to add element at back of vector]
    ---> push_back() : Time complexity O(1)

    eg-:    int n;
            cin>>n;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin>>x;
                vect.push_back(x);
            }

## Printing vector: 
    we can print vector same as we used to do in array by defining a function and using for loop.
    we can use ""v.size()"" to get size of vector
    ---> v.size() : Time Complexity O(1)

    eg-:    void printvect(vector<int> v)
            {
                for (int i = 0; i < v.size(); i++)
                {
                    cout<< v[i]<< " ";
                }
                cout<<endl; 
            }

## Removing last element of vector {pop_back();}:
    we can directly remove last elements from our array using pop_back() function
    ---> v.pop_back()  : Time Complexity O(1);