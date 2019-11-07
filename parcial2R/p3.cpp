void SimpleVec::expandCapacityWith(int param) {
  double *oldArray = array;
  capacity = 2 * param;
  array = new double[capacity];

  for(int i = 0; i < length; ++i)
      array[i] = oldArray[i];
  delete[] oldArray;
}

void SimpleVec::insert_chunk(int index, double *vals, int vals_size) {
  if(capacity < length+vals_size) expandCapacityWith(vals_size);

  double *oldArray = array;
  double *arrayCopy = new double[capacity];
  for(int i = length; i > index; --i)
    arrayCopy[i] = oldArray[i];

  for(int k = index; k < length; k++)
    array[k] = vals[k];
  array[index] = *vals;

  for(int j = index+vals_size; j < length; j++)
    array[j] = arrayCopy[j];
  array[index] = *arrayCopy;

  delete[] oldArray;
  delete[] arrayCopy;

}
