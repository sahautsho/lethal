subtotal = 0
for i in range(3):
    price = float(input(f"Price of item {i+1}: "))
    qty = int(input(f"Quantity of item {i+1}: "))
    subtotal += price * qty
discount = subtotal*0.1 if subtotal > 100 else 0
total_after_disc = subtotal - discount
tax = total_after_disc * 0.08
final_total = total_after_disc + tax
print("Subtotal:", subtotal)
print("Discount:", discount)
print("Tax:", tax)
print("Final Total:", final_total)
