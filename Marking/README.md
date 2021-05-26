|Code|Problem|
|---|----|
|MR  | Unnecessary multiple return statements|
|CM  | Commented code left in the released version |
|IH | Unneeded header file included in another header file| 
# Coding Feedback
## MR
### Feedback
you have multiple return statements in your functions. A function must have only one point of exit. (i.e one return statement) please make sure in your future coding there is only one return statement in a function.
### Problematic code sample
```C++
	bool CalorieList::add(const char* item_name, int calories, int when)
	{
		if (m_itemsAdded < m_noOfItems)
		{
			m_items[m_itemsAdded].set(item_name, calories, when);
			m_itemsAdded++;
			return true;
		}
		return false;
	}
```
## CM
### Feedback
Unnecessary commented code in the source code. Make sure all the unwanted commented code is removed from the source code before submission. 
### Problematic code sample
```C++

        while (i < length && s1[i] != '\0' && s2[i] != '\0')
        {

            if (s1[i] > s2[i])
            {
                //cout << flag;
                flag = 1;
            }
            else if (s1[i] < s2[i])
            {
                flag = -1;
                //  cout << flag;
            }
            i++;
        }
  
```


## IH
### Feedback
Only include a header file where it is being used. Never include a header file inside another header file unless absolutely necessary
### Problematic code sample
```C++

#ifndef FILE_H
#define FILE_H

#include <cstdio>   // << Not needed here!!!!!!!!!
#include"ShoppingRec.h"
namespace sdds {
	bool open();
	bool openWR();
	void close();
	bool fread(ShoppingRec* rec);
	void fwrite(const ShoppingRec* rec);
}
#endif

```

## Code
### Feedback
### Problematic code sample
```C++
```
## Code
### Feedback
### Problematic code sample
```C++
```
## Code
### Feedback
### Problematic code sample
```C++
```
