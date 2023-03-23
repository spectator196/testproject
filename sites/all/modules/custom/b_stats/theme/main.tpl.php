<?php
/**
 * @var $data_list
 */
?>



<!-- Bootstrap CSS -->
<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.2/dist/css/bootstrap.min.css" integrity="sha384-xOolHFLEh07PJGoPkLv1IbcEPTNtaed2xpHsD9ESMhqIYd0nLMwNLD69Npy4HI+N" crossorigin="anonymous">

<!-- Option 1: jQuery and Bootstrap Bundle (includes Popper) -->
<script src="https://cdn.jsdelivr.net/npm/jquery@3.5.1/dist/jquery.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-Fy6S3B9q64WdZWQUiU+q4/2Lc9npb8tCaSX9FK7E8HnRr0Jz8D6OP9dO5Vg3Q9ct" crossorigin="anonymous"></script>



<table class="table">
  <thead>
    <tr>
      <th scope="col">ID</th>
      <th scope="col">ФИО</th>
      <th scope="col">ИНН</th>
      <th scope="col">Email</th>
      <th scope="col">Телефон</th>
      <th scope="col">Форма</th>
    </tr>
  </thead>
  <tbody>
    <?php 
    foreach ($data_list as $record){
      $row='<tr><th scope="row">'.$record['ID'].'</th>
      <td>'.$record['Full_name'].'</td>
      <td>'.$record['Inn'].'</td>
      <td>'.$record['Email'].'</td>
      <td>'.$record['Phonenumber'].'</td>
      <td>'.$record['Reg_form'].'</td>
      </tr>';
      print $row;
    }?>
  </tbody>
</table>