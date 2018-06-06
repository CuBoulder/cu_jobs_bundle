<div class="cu-boulder-jobs-list">
  <ul class="jobs-list">
    <?php foreach ($content['jobs_feed'] as $job): ?>
      <li><?php print render($job); ?></li>
    <?php endforeach; ?>
  </ul>
</div>
