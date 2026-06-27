int __thiscall sub_6F915490(int this, const char *a2, int a3)
{
  int v3; // esi@1
  _BYTE *v4; // ebx@1
  int result; // eax@3

  v3 = this;
  v4 = (_BYTE *)(this + 36);
  if ( sub_6F8BF810((void *)(this + 36)) || (sub_6F90E3F0(v4, a2, a3, 436), !sub_6F8BF810(v4)) )
    result = 0;
  else
    result = sub_6F915500(v3, a3);
  return result;
}
