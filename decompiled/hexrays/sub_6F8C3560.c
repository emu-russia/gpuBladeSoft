int __thiscall sub_6F8C3560(_BYTE *this, const void *a2, int a3, void *a4)
{
  char v4; // al@1
  _BYTE *v5; // ebx@2
  int (__stdcall *v6)(const void *, int, void *); // eax@3

  v4 = this[28];
  if ( v4 == 1 )
    goto LABEL_4;
  v5 = this;
  if ( v4 )
  {
    v6 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)this + 28);
    if ( v6 == sub_6F8C3630 )
    {
LABEL_4:
      memcpy(a4, a2, a3 - (_DWORD)a2);
      return a3;
    }
  }
  else
  {
    sub_6F8C33B0((unsigned int)this);
    v6 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v5 + 28);
    if ( v6 == sub_6F8C3630 )
      goto LABEL_4;
  }
  return ((int (__thiscall *)(_BYTE *, const void *, int, void *))v6)(v5, a2, a3, a4);
}
