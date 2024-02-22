# WIP Documentation of m_msg Code in AC
For personal modding reference.

## B Button Dialogue Speed Check
Lines 1108 - 1110 in m_msg_cursol.c_inc set the text flag to fast if the B button is held.

```
  if (chkTrigger(BUTTON_B) && (msg_p->status_flags & mMsg_STATUS_FLAG_CURSOL_JUST) == 0) {
    msg_p->status_flags |= mMsg_STATUS_FLAG_FAST_TEXT;
  }
```
