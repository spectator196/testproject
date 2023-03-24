<?php
/**
 * @var $full_data_list
 * @var $main_data_list
 */
?>

<!-- Bootstrap CSS -->
<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.2/dist/css/bootstrap.min.css" integrity="sha384-xOolHFLEh07PJGoPkLv1IbcEPTNtaed2xpHsD9ESMhqIYd0nLMwNLD69Npy4HI+N" crossorigin="anonymous">

<!-- Option 1: jQuery and Bootstrap Bundle (includes Popper) -->
<script src="https://cdn.jsdelivr.net/npm/jquery@3.5.1/dist/jquery.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-Fy6S3B9q64WdZWQUiU+q4/2Lc9npb8tCaSX9FK7E8HnRr0Jz8D6OP9dO5Vg3Q9ct" crossorigin="anonymous"></script>

<?php foreach ($main_data_list as $record) : ?>
  <div class="card w-100">
    <div class="row">
      <div class="col"><b><?php print $record['id']['val']?> <?php print $record['full_name']['val']?></b>
        <p><?php print $record['inn']['col']?>: <?php print $record['inn']['val']?></p>
        <p><?php print $record['email']['col']?>: <?php print $record['email']['val']?></p>
        <p><?php print $record['number']['col']?>: <?php print $record['number']['val']?></p>
        <p><?php print $record['reg_form']['col']?>: <?php print $record['reg_form']['val']?></p>
      </div>
      <div class="col"><b><?php print $record['id']['val']?> <?php print $record['full_name']['val']?></b>
        <p><?php print $record['inn']['col']?>: <?php print $record['inn']['val']?></p>
        <p><?php print $record['email']['col']?>: <?php print $record['email']['val']?></p>
        <p><?php print $record['number']['col']?>: <?php print $record['number']['val']?></p>
        <p><?php print $record['reg_form']['col']?>: <?php print $record['reg_form']['val']?></p>
      </div>
    </div>
  </div>
  <?php endforeach; ?>








