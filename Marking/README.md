|Code|Problem|
|---|----|
|[MR](#mr)  | Unnecessary multiple return statements|
|[CM](#cm)  | Commented code left in the released version |
|[IH](#ih) | Unneeded header file included in another header file| 
|[BS](#bs) | Bad headerfile safeguard define names| 
|[CA](#ca) | Custom headerfiles must be included after library headerfiles|
|[BK](#bk) | Use of break statement in a loop |

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

#ifndef SDDS_FILE_H
#define SDDS_FILE_H

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

## BS
### Feedback
The format of the safeguard header file is as follows:<br />
```NAMESPACE_HEADERNAME_H_```
### Problematic code sample
```C++
// file.h header file
#ifndef FILE_H   // << the name sould be SDDS_FILE_H_
#define FILE_H
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
## CA
### Feedback
All the custom headerfiles written by you must be inlucded after the library headerfiles
### Problematic code sample
```C++
#define _CRT_SECURE_NO_WARNINGS
#include "File.h"  << this line must come after line 99
#include <cstdio>
namespace sdds
{

```
## BK
### Feedback
the break statement is only allowed in a switch statement. A break statement should never be used to end a loop
### Problematic code sample
```C++
while (*s1 != '\0' && *s2 != '\0')
{
	count++;
	if (count >= len)
		break;       <<< Never use a break in to end a loop, use flags or set the condition of the loop properly.
	s1++;
	s2++;
}

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
