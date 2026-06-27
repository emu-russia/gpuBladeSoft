void *__thiscall sub_6F9176F0(int this, const char *a2, int a3)
{
  int v3; // esi@1
  _BYTE *v4; // ebx@1
  void *result; // eax@6

  v3 = this;
  v4 = (_BYTE *)(this + 36);
  if ( sub_6F8BF810((void *)(this + 36)) || (sub_6F90E3F0(v4, a2, a3, 436), !sub_6F8BF810(v4)) )
  {
    result = 0;
  }
  else
  {
    if ( !*(_BYTE *)(v3 + 68) && !*(_DWORD *)(v3 + 60) )
      sub_6F9176C0(v3);
    result = sub_6F917770((void *)v3, a3);
  }
  return result;
}
