
# What we do using this module.

1. This module has a dependency of ctools. 
2. page is accessable from http://localhost/registration/page
3. Most of the fields are doing client side validation using FAPI
4. Server side validation is also available for email field.
5. Server side validation for checking email is already taken. 
6. On successfull form submission redirecting to previous page with success message.
7. Also implementation of hook_views_data(). for creating view using custom table.
8. How to declare our custom table as entity.
9. Implements hook_action_info() for custom action for views_bulk_operation.
10. Update custom table using views bulk operation. 
