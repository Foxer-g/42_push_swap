# PUSH_SWAP
## **Because Swap_push doesn’t feel as natural**

Push_swap is a project form 42's Common Core on the circle 2

This project is abourt sorting arguments with a limited set of instructions in two stacks named stack_a and stack_b.
To achieve it, it use the turk sorting algorithm.

## The actions :
> - Swap :
>   - **sa** (Swap a) : Swap the first 2 elements at the top of stack_a but do nothing if there is only one element or none.
>   - **sb** (Swap b) : Swap the first 2 elements at the top of stack_b but do nothing if there is only one element or none.
>   - **ss** : sa and sb at the same time.
>
> - Push :
>   - **pa** (Push a) : Take the first element at the top of stack_b and put it at the top of stack_a but do nothing if stack_b is empty.
>   - **pb** (Push b) : Take the first element at the top of stack_a and put it at the top of stack_b but do nothing if stack_a is empty.
>
> - Swap :
>   - **ra** (Rotate a) : Shift up all elements of stack_a by 1 and the first element becomes the last one.
>   - **rb** (Rotate b) : Shift up all elements of stack_b by 1 and the first element becomes the last one.
>   - **rr** : ra and rb at the same time.
>
> - Swap :
>   - **rra** (Rotate a) : Shift down all elements of stack_a by 1 and the last element becomes the first one.
>   - **rrb** (Rotate b) : Shift down all elements of stack_b by 1 and the last element becomes the first one.
>   - **rrr** : rra and rrb at the same time.

## Usage instructions :
![](https://github.com/Foxer-g/42_push_swap/blob/main/push_swap_instructions.gif)
