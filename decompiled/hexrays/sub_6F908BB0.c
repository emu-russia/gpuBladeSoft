int *__thiscall sub_6F908BB0(int *this, const void **a2)
{
  int *v2; // ebx@1
  size_t v3; // esi@1
  unsigned int v4; // edi@2
  const void *v5; // edx@3
  void *v6; // eax@3
  int v7; // eax@5

  v2 = this;
  v3 = *((_DWORD *)*a2 - 3);
  if ( v3 )
  {
    v4 = v3 + *(_DWORD *)(*this - 12);
    if ( v4 > *(_DWORD *)(*this - 8) || *(_DWORD *)(*this - 4) > 0 )
    {
      sub_6F909A00(this, v3 + *(_DWORD *)(*this - 12));
      v5 = *a2;
      v6 = (void *)(*(_DWORD *)(*v2 - 12) + *v2);
      if ( v3 == 1 )
      {
LABEL_9:
        *(_BYTE *)v6 = *(_BYTE *)v5;
        goto LABEL_5;
      }
    }
    else
    {
      v5 = *a2;
      v6 = (void *)(*(_DWORD *)(*this - 12) + *this);
      if ( v3 == 1 )
        goto LABEL_9;
    }
    memcpy(v6, v5, v3);
LABEL_5:
    v7 = *v2;
    *(_DWORD *)(v7 - 4) = 0;
    *(_DWORD *)(v7 - 12) = v4;
    *(_BYTE *)(v7 + v4) = 0;
  }
  return v2;
}
