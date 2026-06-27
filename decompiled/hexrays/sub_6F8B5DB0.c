signed int __usercall sub_6F8B5DB0@<eax>(int a1@<ebp>, signed int a2, int a3)
{
  HANDLE v3; // eax@5
  int v4; // edi@6
  unsigned int v5; // esi@6
  signed int result; // eax@7
  HANDLE v7; // eax@13
  unsigned int v8; // edi@16
  int v9; // esi@16
  int v10; // eax@16
  int v11; // ebp@16
  signed int v12; // eax@16
  signed int v13; // edx@16
  __int64 v14; // [sp+28h] [bp-44h]@16
  __int64 v15; // [sp+30h] [bp-3Ch]@5
  char v16; // [sp+38h] [bp-34h]@5
  __int64 v17; // [sp+40h] [bp-2Ch]@5
  struct _FILETIME v18; // [sp+48h] [bp-24h]@5

  if ( a2 != 1 )
  {
    if ( a2 <= 1 )
    {
      if ( !a2 )
      {
        GetSystemTimeAsFileTime((LPFILETIME)&v15);
        v4 = (unsigned __int64)(v15 - 116444736000000000i64) >> 32;
        v5 = v15 + 717324288;
        goto LABEL_7;
      }
    }
    else if ( a2 == 2 )
    {
      v7 = GetCurrentProcess();
      if ( GetProcessTimes(v7, (LPFILETIME)&v15, (LPFILETIME)&v16, (LPFILETIME)&v17, &v18) )
      {
        v4 = (unsigned __int64)(v17 + *(_QWORD *)&v18) >> 32;
        v5 = v17 + v18.dwLowDateTime;
        goto LABEL_7;
      }
    }
    else if ( a2 == 3 )
    {
      v3 = GetCurrentThread();
      if ( GetThreadTimes(v3, (LPFILETIME)&v15, (LPFILETIME)&v16, (LPFILETIME)&v17, &v18) )
      {
        v4 = (unsigned __int64)(v17 + *(_QWORD *)&v18) >> 32;
        v5 = v17 + v18.dwLowDateTime;
LABEL_7:
        *(_DWORD *)a3 = sub_6F8A1530(v4, __PAIR__(v4, v5), 0x989680u, 0);
        *(_DWORD *)(a3 + 4) = 100 * sub_6F8A1630(a1, __PAIR__(v4, v5), 10000000i64);
        return 0;
      }
    }
LABEL_12:
    *_errno() = 22;
    return -1;
  }
  if ( !QueryPerformanceFrequency((LARGE_INTEGER *)&v17) || !QueryPerformanceCounter((LARGE_INTEGER *)&v18) )
    goto LABEL_12;
  v8 = HIDWORD(v17);
  v9 = v17;
  v10 = sub_6F8B7010(*(_QWORD *)&v18, v17, (int)&v14);
  *(_DWORD *)a3 = v10;
  v11 = v10;
  v12 = sub_6F8A13E0(v9, 1000000000 * v14 + ((signed __int64)__PAIR__(v8, v9) >> 1), __PAIR__(v8, v9));
  v13 = v12;
  *(_DWORD *)(a3 + 4) = v12;
  result = 0;
  if ( v13 > 999999999 )
  {
    *(_DWORD *)a3 = v11 + 1;
    *(_DWORD *)(a3 + 4) = v13 - 1000000000;
  }
  return result;
}
