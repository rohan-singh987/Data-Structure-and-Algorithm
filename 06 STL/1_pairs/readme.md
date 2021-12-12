Pair -: we write elements in pair, pair maybe of int-int int-string, string-double, even container-container.....

## Declaring Pair:
        pair<dataType, dataType> variable_name;
        eg-: pair<int, sstring> p;

## Assigning values to pair:
    we have two method to assign value to pairs
    1. Internal Function
    --->   variable_name = make_pair(value, value);
            eg-: p = make_pair(1, "Rohan")

    2. 
    --->   variable_name = {value, value}
            eg-: p = {2, "Singh"}

## Printing pair:
    cout<< variable_name.first <<" "<< variable_name.second;
        cout<< p.first<<" "<< p.second;

## Giving input to pair:
    cin>> variable_name.first;
    cin>> variable_name.second;