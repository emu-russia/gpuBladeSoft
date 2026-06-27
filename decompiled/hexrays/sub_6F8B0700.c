int *__cdecl sub_6F8B0700(signed int a1)
{
  signed int v1; // esi@2
  int *result; // eax@2
  bool v3; // zf@3
  int *v4; // ST1C_4@8

  sub_6F8B05F0(0);
  if ( a1 > 9 )
    goto LABEL_13;
  result = (int *)dword_703734C0[a1];
  if ( result )
  {
    v3 = dword_703734E8 == 2;
    dword_703734C0[a1] = *result;
    if ( !v3 )
      goto LABEL_4;
LABEL_8:
    v4 = result;
    LeaveCriticalSection(&CriticalSection);
    result = v4;
    goto LABEL_4;
  }
  result = (int *)off_6FB48AAC;
  v1 = 1 << a1;
  if ( ((unsigned int)(4 * (1 << a1) + 27) >> 3) + (((_BYTE *)off_6FB48AAC - (_BYTE *)&unk_70372BC0) >> 3) > 0x120 )
  {
LABEL_13:
    v1 = 1 << a1;
    result = (int *)malloc((4 * (1 << a1) + 27) & 0xFFFFFFF8);
    if ( !result )
      return result;
  }
  else
  {
    off_6FB48AAC = (char *)off_6FB48AAC + ((4 * (1 << a1) + 27) & 0xFFFFFFF8);
  }
  v3 = dword_703734E8 == 2;
  result[1] = a1;
  result[2] = v1;
  if ( v3 )
    goto LABEL_8;
LABEL_4:
  result[4] = 0;
  result[3] = 0;
  return result;
}
