int __thiscall sub_6F908D40(int *this, size_t a2, char a3)
{
  int v3; // edx@1
  int v4; // ebx@1
  int *v5; // esi@2
  unsigned int v6; // ebx@2
  void *v7; // eax@3
  int result; // eax@5

  v3 = *this;
  v4 = *(_DWORD *)(*this - 12);
  if ( 1073741820 - v4 < a2 )
    sub_6F95B240("basic_string::append");
  v5 = this;
  v6 = a2 + v4;
  if ( v6 > *(_DWORD *)(v3 - 8) || *(_DWORD *)(v3 - 4) > 0 )
  {
    sub_6F909A00(this, v6);
    v7 = (void *)(*(_DWORD *)(*v5 - 12) + *v5);
    if ( a2 == 1 )
    {
LABEL_8:
      *(_BYTE *)v7 = a3;
      goto LABEL_5;
    }
  }
  else
  {
    v7 = (void *)(*(_DWORD *)(*this - 12) + *this);
    if ( a2 == 1 )
      goto LABEL_8;
  }
  memset(v7, a3, a2);
LABEL_5:
  result = *v5;
  *(_DWORD *)(result - 4) = 0;
  *(_DWORD *)(result - 12) = v6;
  *(_BYTE *)(result + v6) = 0;
  return result;
}
