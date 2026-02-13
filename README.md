*This project has been created as part of the 42 curriculum by toespino*

# PUSH\_SWAP
## **Because Swap_push doesn’t feel as natural**

Push\_swap is a project form 42's Common Core on the circle 2

This project is about sorting arguments with a limited set of instructions in two stacks named stack\_a and stack\_b.
To achieve it, it use the turk sorting algorithm.

## Inputs
The push\_swap program accept only 32 Bits intergers as inputs.
Duplicated elements aren't allowed.
In case of an invalid input push\_swap will return "**Error**" in the error output.
If nothing is turned in, the program will just return to the prompt.

## Output
push\_swap would always return the instructions separated only by \\n
If it's already sorted the program while return nothing.

## The actions :
> - Swap :
>   - **sa** (Swap a) : Swap the first 2 elements at the top of stack\_a but do nothing if there is only one element or none.
>   - **sb** (Swap b) : Swap the first 2 elements at the top of stack\_b but do nothing if there is only one element or none.
>   - **ss** : sa and sb at the same time.
>
> - Push :
>   - **pa** (Push a) : Take the first element at the top of stack\_b and put it at the top of stack\_a but do nothing if stack\_b is empty.
>   - **pb** (Push b) : Take the first element at the top of stack\_a and put it at the top of stack\_b but do nothing if stack\_a is empty.
>
> - Swap :
>   - **ra** (Rotate a) : Shift up all elements of stack\_a by 1 and the first element becomes the last one.
>   - **rb** (Rotate b) : Shift up all elements of stack\_b by 1 and the first element becomes the last one.
>   - **rr** : ra and rb at the same time.
>
> - Swap :
>   - **rra** (Rotate a) : Shift down all elements of stack\_a by 1 and the last element becomes the first one.
>   - **rrb** (Rotate b) : Shift down all elements of stack\_b by 1 and the last element becomes the first one.
>   - **rrr** : rra and rrb at the same time.

## Usage instructions :
![](https://github.com/Foxer-g/42_push_swap/blob/main/push_swap_instructions.gif)

## Ressources :
> - **turk sorting algorithm documentation** : [documentation link](https://pure-forest.medium.com/push-swap-turk-algorithm-explained-in-6-steps-4c6650a458c0)
> - **Wikipedia article about algorithmic complexity** : [Wikipedia](https://en.wikipedia.org/wiki/Analysis_of_algorithms)

In this project the AI has been used to understand some algorithm and to understand deepen the principle of complexity.
