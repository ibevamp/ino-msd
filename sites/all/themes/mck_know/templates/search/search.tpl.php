<form method="GET" action="<?php echo base_path() ?>search">
  <div class="search-nav" data-module="SearchNav,SearchSuggestions">
    <span class="search-nav-input-icon r2-search"></span>

    <input aria-live="polite" name="search" placeholder="Type to search..." type="text" id="edit-keys-1" name="keys_1" value="" size="15" maxlength="128" class="search-nav-input">

    <button class="search-nav-submit" title="Search" type="submit">
      Search
    </button>
    <button class="search-nav-button-close desktop r2-close" type="button">
      <span class="visually-hidden">Toggle search field</span>
    </button>
    <ul class="search-nav-suggestions span-full-width"></ul>
  </div>
</form>
