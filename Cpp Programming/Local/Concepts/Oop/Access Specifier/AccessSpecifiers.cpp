/* Access Specifiers in C++ 
Restriction Order: private > protected > public

_____Outside of the Class:_____
1. private methods: (a). Can only be accessed outside of the class through the public methods of the 
same class. 
                    (b). Cannot be inherited to derived classes.

2. protected methods: (a). Can only be accessed outside of the class through the public methods
                        of the same class.
                      (b). Can be inherited to derived classes.

3. public methods: can be accessed from anywhere.

_____Inside the same Class:_____
All methods can be accessed within the same class, where they are created.

*/