<script>
var keylist="abcdefghijklmnopqrstuvwxyz123456789"
var temp=''

function generatepass(plength){
temp=''
for (i=0;i<plength;i++)
temp+=keylist.charAt(Math.floor(Math.random()*keylist.length))
return temp
}

function populateform(enterlength){
document.pgenerate.output.value=generatepass(enterlength)
}
</script>

<form name="pgenerate">
<input type="text" size=18 name="output">
<input type="button" value="Generate Password" onClick="populateform(this.form.thelength.value)"><br />
<b>Password Length:</b> <input type="text" name="thelength" size=3 value="7">
</form>
