### EXERCISES SECTION 2.4.2

#### 2.27

| Q. No. | Legal/Illegal | Explanation                                                  |
| :----: | :-----------: | ------------------------------------------------------------ |
|  (a)   |    Illegal    | A reference to non-`const` cannot be initialized to a value. |
|  (b)   |     Legal     | `const` pointer can be initialized to an address of a predefined variable. Legal provided that `i2` is already defined/declared and has a type of `int`. |
|  (c)   |     Legal     | A reference to `const` must be initialized.                  |
|  (d)   |     Legal     | Same as (b). A `const` pointer to `const int` can carry an address of a non/`const` object, so `i2` can be non/`const`. |
|  (e)   |     Legal     | (b), (d)                                                     |
|  (f)   |    Illegal    | A `const` reference to `const` must be initialized.          |
|  (g)   |     Legal     | Initializing a `const` by another object is legal, so long as they have the same **base type**. A reference to `const` must be initialized. |

#### 2.28

| Q. No. | Legal/Illegal | Explanation                                       |
| ------ | ------------- | ------------------------------------------------- |
| (a)    | Illegal       | A `const` pointer (variable) must be initialized. |
| (b)    | Illegal       | (a)                                               |
| (c)    | Illegal       | A `const` variable must be initialized.           |
| (d)    | Illegal       | (a), (c)                                          |
| (e)    | Legal         | A pointer to `const int`.                         |

#### 2.29

| Q. No. | Legal/Illegal | Explanation                                                  |
| ------ | ------------- | ------------------------------------------------------------ |
| (a)    | Legal         | The value of a `const` variable can be assigned to another variable. |
| (b)    | Illegal       | `p3` is a `const` pointer to `const int`, the address of a `const` object can't be assigned to a non-`const` pointer, `p1` is a pointer to a non-`const int`. |
| (c)    | Illegal       | The address of a `const int` object can't be assigned to a pointer to a plain `int`. |
| (d)    | Legal         |                                                              |
| (e)    | Illegal       | The value of a `const` pointer (variable) can't be changed once initialized. |
| (f)    | Illegal       | (e)                                                          |

