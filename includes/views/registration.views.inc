<?php
/**
 * Implementation of hook_views_data().
 */
function registration_views_data() {
  $data = array();

  // Putting the table into its own groups so that we can recognize in the UI where it come from.
  $data['registration_data']['table']['group'] = t('User registraion');

  // Making the registraion table a base table so a view can created based on it.

  $data['registration_data']['table']['base'] = array(
    'title' => t('User Registraion'),
    'help' => t('Contain a records we want to exposed to view'),
  );

  // Relation our custom table with user table.

  $data['registration_data']['table']['join'] = array(
    'user' => array(
       'left_field' => 'mail',
       'field' => 'mail',
    ),
 ); 
  
   // The first_name field
  $data['registration_data']['first_name'] = array(
    'title' => t('First Name'),
    'help' => t('User Name'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
   );

   // The last_name field
  $data['registration_data']['last_name'] = array(
    'title' => t('Last Name'),
    'help' => t('User Name'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
 );

    // The organization field
  $data['registration_data']['organization'] = array(
    'title' => t('Organization Name'),
    'help' => t('Organization Name'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );


 // The User email field
  $data['registration_data']['email_address'] = array(
    'title' => t('User email address'),
    'help' => t('User email address'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'relationship' => array(
      'base' => 'user',
      'field' => 'email',
      'handler' => 'views_handler_relationship',
      'label' => t('User'),
    ),
     'argument' => array(
      'handler' => 'views_handler_argument_user_email',
      'numeric' => TRUE,
      'validate type' => 'email',
    ),
  );

   // The phone_number field
  $data['registration_data']['phone_number'] = array(
    'title' => t('User mobile number'),
    'help' => t('User mobile number'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );  

// The organization field
  $data['registration_data']['gender'] = array(
    'title' => t('User Gender'),
    'help' => t('User Gender'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
 );

 return $data;

}