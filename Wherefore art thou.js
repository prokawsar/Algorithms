
/*
https://www.freecodecamp.org/challenges/wherefore-art-thou
*/
function whatIsInAName(collection, source) {
  var arr= [];
  var srcKeys = Object.keys(source);

  for(var i =0; i<collection.length; i++){

    var a = 0;
    for(var j=0; j<srcKeys.length; j++){
      var obj = collection[i];

      if(collection[i].hasOwnProperty(srcKeys[j]) && obj[srcKeys[j]] === source[srcKeys[j]]){
        a++;  
      }
    }
    if(j == a){
      arr.push(collection[i]);  
    }

  }
  console.log(arr);
  return arr;
}
whatIsInAName([{ "a": 1, "b": 2 }, { "a": 1 }, { "a": 1, "b": 2, "c": 2 }], { "a": 1, "b": 2 });
