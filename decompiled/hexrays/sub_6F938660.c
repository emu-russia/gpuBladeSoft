signed int __thiscall sub_6F938660(unsigned int *this)
{
  unsigned int *v1; // ebx@2
  signed int result; // eax@2

  if ( !*this )
  {
    result = 22;
LABEL_5:
    sub_6F95B380(result);
  }
  v1 = this;
  result = sub_6F8B5730(*this, 0);
  if ( result )
    goto LABEL_5;
  *v1 = 0;
  return result;
}
