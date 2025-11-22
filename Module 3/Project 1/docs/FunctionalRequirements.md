# CHADA TECH
## Chada Tech Clocks Functional Requirements

### Problem Statement
> Chada Tech has domestic and international clients. To meet international standard ISO 8601, Chada Tech wants their clients to be able to view a 12- and a 24-hour clock on their website rather than just the standard 12-hour clock.

### Functional Requirements

1.  **Clock12:** Time should be displayed in 12-hour format where the clock does not exceed 12:59:59.
2.  **Clock24:** Time should be displayed in 24-hour format where the clock does not exceed 23:59:59.
3.  Both clocks should display on the screen with the current time in the proper format. For example:
    *(Note: The visual example in the document shows them stacked, but Requirement 5 specifies "next to each other".)*

    **Example Output (Requirement 3):**
    ```text
    ************************** **************************
    *      12-Hour Clock     * *     24-Hour Clock      *
    *                        * *                        *
    *       03:22:02 PM      * *       15:22:02         *
    *                        * *                        *
    ************************** **************************
    ```

4.  Your solution should allow the user to exit the program as well as add one hour, minute, or second to both clocks from a user menu as follows:

    ```text
    **************************
    * 1-Add One Hour         *
    * *
    * 2-Add One Minute       *
    * *
    * 3-Add One Second       *
    * *
    * 4- Exit Program        *
    **************************
    ```

5.  Once a selection is made from the user menu, the program should take action based on that choice. [cite_start]Both clocks must display on the screen simultaneously in the proper format **next to each other**. Below is a sample of the expected output if the user selects option 3 from the menu:

    **Example Output (Requirement 5, as text describes):**
    ```text
    ************************** **************************
    *      12-Hour Clock     * *     24-Hour Clock      *
    *                        * *                        *
    *       03:22:02 PM      * *       15:22:02         *
    *                        * *                        *
    ************************** **************************
    ```