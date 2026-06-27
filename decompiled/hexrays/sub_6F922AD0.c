char *__thiscall sub_6F922AD0(int this, char *a2)
{
  _BYTE *v2; // esi@1
  int v3; // eax@1
  char *v4; // edx@1
  char *v5; // ecx@1
  char *result; // eax@1
  int v7; // edx@1

  v2 = (_BYTE *)this;
  *(_BYTE *)this = 0;
  v3 = *(_DWORD *)a2;
  *(_DWORD *)(this + 4) = a2;
  v4 = &a2[*(_DWORD *)(v3 - 12)];
  v5 = (char *)*((_DWORD *)v4 + 28);
  result = &a2[*(_DWORD *)(v3 - 12)];
  v7 = *((_DWORD *)v4 + 5);
  if ( v5 )
  {
    if ( v7 )
      return (char *)sub_6F958B40((int)result, v7 | 4);
    sub_6F922270(v5);
    v7 = *(_DWORD *)&a2[*(_DWORD *)(*(_DWORD *)a2 - 12) + 20];
    result = &a2[*(_DWORD *)(*(_DWORD *)a2 - 12)];
  }
  if ( v7 )
    return (char *)sub_6F958B40((int)result, v7 | 4);
  *v2 = 1;
  return result;
}
