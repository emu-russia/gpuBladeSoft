signed int __usercall sub_6F7E46D0@<eax>(_DWORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>)
{
  int v3; // esi@1
  int v4; // ebx@2
  _DWORD *v5; // edi@2
  signed int result; // eax@19

  v3 = *a2;
  if ( (unsigned int)*a2 > 5
    && (v4 = *a1, v5 = a1, *a1)
    && *(_BYTE *)v4 == *(_BYTE *)a3
    && v4 != -1
    && a3 != -1
    && *(_BYTE *)(v4 + 1) == *(_BYTE *)(a3 + 1)
    && v4 != -2
    && a3 != -2
    && *(_BYTE *)(v4 + 2) == *(_BYTE *)(a3 + 2)
    && v4 != -3
    && a3 != -3
    && *(_BYTE *)(v4 + 3) == *(_BYTE *)(a3 + 3)
    && v4 != -4
    && a3 != -4
    && *(_BYTE *)(v4 + 4) == *(_BYTE *)(a3 + 4)
    && v4 != -5
    && a3 != -5
    && *(_BYTE *)(v4 + 5) == *(_BYTE *)(a3 + 5) )
  {
    result = 1;
    *v5 = v4 + 6;
    *a2 = v3 - 6;
  }
  else
  {
    result = 0;
  }
  return result;
}
