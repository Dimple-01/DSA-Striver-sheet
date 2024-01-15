<h2><a href="https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2535. Difference Between Element Sum and Digit Sum of an Array</a></h2><h3>Easy</h3><hr><div><p>You are given a positive integer array <code>nums</code>.</p>

<ul>
	<li>The <strong>element sum</strong> is the sum of all the elements in <code>nums</code>.</li>
	<li>The <strong>digit sum</strong> is the sum of all the digits (not necessarily distinct) that appear in <code>nums</code>.</li>
</ul>

<p>Return <em>the <strong>absolute</strong> difference between the <strong>element sum</strong> and <strong>digit sum</strong> of </em><code>nums</code>.</p>

<p><strong>Note</strong> that the absolute difference between two integers <code>x</code> and <code>y</code> is defined as <code>|x - y|</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,15,6,3]
<strong>Output:</strong> 9
<strong>Explanation:</strong> 
The element sum of nums is 1 + 15 + 6 + 3 = 25.
The digit sum of nums is 1 + 1 + 5 + 6 + 3 = 16.
The absolute difference between the element sum and digit sum is |25 - 16| = 9.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> 0
<strong>Explanation:</strong>
The element sum of nums is 1 + 2 + 3 + 4 = 10.
The digit sum of nums is 1 + 2 + 3 + 4 = 10.
The absolute difference between the element sum and digit sum is |10 - 10| = 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 2000</code></li>
</ul>
</div>