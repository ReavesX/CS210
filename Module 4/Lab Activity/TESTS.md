# Test Report: Online Shopping Cart (Part 1)

The following tests were executed to validate the `ItemToPurchase` class and the `main` program logic. All tests passed successfully.

## 1. Unit Tests (Class Functionality)

These tests verify that the `ItemToPurchase` class correctly stores and retrieves data using its setters and getters.

| Test Case | Action | Verification | Result |
| :--- | :--- | :--- | :--- |
| **1. Name Accessor/Mutator** | `item.SetName("Chocolate Chips")` | `item.GetName() == "Chocolate Chips"` | **PASSED** <br> Item name correctly set and accessible. |
| **2. Price Accessor/Mutator** | `item.SetPrice(3)` | `item.GetPrice() == 3` | **PASSED** <br> Item price $3 correctly set and accessible. |
| **3. Quantity Accessor/Mutator** | `item.SetQuantity(4)` | `item.GetQuantity() == 4` | **PASSED** <br> Item quantity of 4 correctly set and accessible. |

---

## 2. Integration & Output Tests (Main Program)

These tests verify the program's interaction with the user, including input prompts, data handling, and formatted output calculation.

### Test 4: Input Prompt Verification
**Goal:** Ensure the program prompts the user in the exact order required.
*   **Input:**
    ```text
    Chocolate Chips
    3
    1
    Bottled Water
    1
    10
    ```
*   **Result:** **PASSED**
    *   Output correctly starts with "Item 1", prompts for name, price, quantity, then repeats for "Item 2".

### Test 5: Calculation & Output (Scenario A)
**Goal:** Verify cost calculation for standard items.
*   **Input:**
    ```text
    Chocolate Chips
    3
    1
    Bottled Water
    1
    10
    ```
*   **Generated Output:**
    ```text
    TOTAL COST
    Chocolate Chips 1 @ $3 = $3
    Bottled Water 10 @ $1 = $10

    Total: $13
    ```
*   **Result:** **PASSED**

### Test 6: Calculation & Output (Scenario B)
**Goal:** Verify cost calculation for different items with higher values.
*   **Input:**
    ```text
    NY Yankees Cap
    20
    2
    Clemson Tigers Lamp
    31
    3
    ```
*   **Generated Output:**
    ```text
    TOTAL COST
    NY Yankees Cap 2 @ $20 = $40
    Clemson Tigers Lamp 3 @ $31 = $93

    Total: $133
    ```
*   **Result:** **PASSED**
