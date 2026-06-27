int *__thiscall sub_6F8FDBD0(int *this, const void **a2)
{
  int *v2; // esi@1
  int v3; // ebx@1
  unsigned int v4; // edi@2
  int v5; // eax@3
  const void *v6; // ecx@3
  void *v7; // edx@3

  v2 = this;
  v3 = *((_DWORD *)*a2 - 3);
  if ( v3 )
  {
    v4 = v3 + *(_DWORD *)(*this - 12);
    if ( v4 > *(_DWORD *)(*this - 8) || *(_DWORD *)(*this - 4) > 0 )
    {
      sub_6F8FEB20(this, v3 + *(_DWORD *)(*this - 12));
      v5 = *v2;
      v6 = *a2;
      v7 = (void *)(*v2 + 2 * *(_DWORD *)(*v2 - 12));
      if ( v3 == 1 )
      {
LABEL_9:
        *(_WORD *)v7 = *(_WORD *)v6;
        goto LABEL_5;
      }
    }
    else
    {
      v5 = *this;
      v6 = *a2;
      v7 = (void *)(*v2 + 2 * *(_DWORD *)(*v2 - 12));
      if ( v3 == 1 )
        goto LABEL_9;
    }
    memcpy(v7, v6, 2 * v3);
    v5 = *v2;
LABEL_5:
    *(_DWORD *)(v5 - 4) = 0;
    *(_DWORD *)(v5 - 12) = v4;
    *(_WORD *)(v5 + 2 * v4) = 0;
  }
  return v2;
}
